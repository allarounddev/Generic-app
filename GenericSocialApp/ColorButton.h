//
//  LoginButton.h
//  PeggSite
//
//  Created by Victor Belenko  on 3/6/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ColorButton : PeggButton

@property (nonatomic, assign) ButtonStyle buttonStyle;

- (id)initWithButtonStyle:(ButtonStyle)buttonStyle title:(NSString *)title andFrame:(CGRect)frame;

@end
