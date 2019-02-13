//
//  Love.h
//  PeggSite
//
//  Created by Victor Belenko  on 3/5/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Love : NSObject

@property (nonatomic, assign) NSInteger loveID;
@property (nonatomic, strong) NSString *articleID;
@property (nonatomic, assign) NSInteger userID;
@property (nonatomic, strong) NSDate *dateLoved;
@property (nonatomic, strong) NSString *avatar;
@property (nonatomic, strong) NSString *userName;

@end
