//
//  Layout.h
//  PeggSite
//
//  Created by Victor Belenko  on 3/10/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Layout : NSObject

@property (nonatomic, assign) NSInteger layoutID;
@property (nonatomic, assign) NSInteger sort;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSMutableArray *regions;

@end
