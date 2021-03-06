//
//  ContentBackgroundView.m
//  PeggSite
//
//  Created by Victor Belenko  on 6/23/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import "ContentBackgroundView.h"

@implementation ContentBackgroundView

- (id)initWithCoder:(NSCoder *)aDecoder
{
	self = [super initWithCoder:aDecoder];
    
	if (self)
	{
        [self setColors:(@[(id)[UIColor colorWithHexString:COLOR_GRADIENT_ONE].CGColor, (id)[UIColor colorWithHexString:COLOR_GRADIENT_TWO].CGColor])];
        
        self.userInteractionEnabled = YES;
	}
    
	return self;
}

@end
