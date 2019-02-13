//
//  LayoutManager.h
//  PeggSite
//
//  Created by Victor Belenko  on 3/21/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LayoutManager : NSObject


@property (nonatomic, strong) NSMutableArray *layouts;

+ (LayoutManager *)sharedInstance;

- (void)getRegionsForUser:(User *)user withCompletionBlock:(void (^)(NSArray *regions, NSError *error))completionBlock;

@end
