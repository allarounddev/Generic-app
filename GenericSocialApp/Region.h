//
//  Region.h
//  PeggSite
//
//  Created by Victor Belenko  on 3/11/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Region : NSObject

@property (nonatomic, assign) NSInteger regionNumber;
@property (nonatomic, assign) CGFloat top, left, width, height;
@property (nonatomic, strong) Article *article;

+ (Region *)currentRegion;
+ (void)setCurrentRegion:(Region *)region;

@end
