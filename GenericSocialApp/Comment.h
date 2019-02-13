//
//  Comment.h
//  PeggSite
//
//  Created by Victor Belenko  on 4/4/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Comment : NSObject

@property (nonatomic, strong) NSString *commentText, *userName, *avatar;
@property (nonatomic, strong) NSDate *dateAdded;
@property (nonatomic, assign) NSInteger userID;

@end
