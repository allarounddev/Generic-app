//
//  PageCircleView.h
//  PeggSite
//
//  Created by Victor Belenko  on 3/27/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageDotView : UIView

@property (nonatomic, assign) BOOL articleExists;
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, strong) CAShapeLayer *highlightedLayer;

@end
