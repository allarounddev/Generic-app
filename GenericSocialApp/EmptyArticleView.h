//
//  EmptyArticleView.h
//  PeggSite
//
//  Created by Victor Belenko  on 5/29/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EmptyArticleView : UIView

@property (nonatomic, strong) Region *region;
@property (nonatomic, assign) BOOL active;

- (id)initWithRegion:(Region *)region andFrame:(CGRect)frame;

@end
