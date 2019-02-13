//
//  Friend.h
//  PeggSite
//
//  Created by Victor Belenko  on 3/3/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import "User.h"

@interface Friend : User

@property (nonatomic, strong) NSDate *dateVisited;
@property (nonatomic, assign) NSInteger newPostCount;
@property (nonatomic, assign) BOOL isFavorite;

+ (Friend *)currentFriend;
+ (void)setCurrentFriend:(Friend *)friend;

@end
