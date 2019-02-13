//
//  PeggTextView.h
//  PeggSite
//
//  Created by Victor Belenko  on 4/18/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PeggTextView : UITextView

@property (nonatomic, assign) BOOL showBorder, noScroll;

- (id)initWithFrame:(CGRect)frame andFontSize:(CGFloat)fontSize;

@end
