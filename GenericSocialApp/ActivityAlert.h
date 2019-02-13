//
//  ActivityAlert.h
//  PeggSite
//
//  Created by Victor Belenko  on 4/29/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ActivityAlert : NSObject

+ (void)presentWithText:(NSString *)text;
+ (void)dismiss;
+ (void)setTitle:(NSString *)title;
+ (void)setMessage:(NSString *)message;

@end
