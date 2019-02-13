//
//  CustomActivityContainer.h
//  PeggSite
//
//  Created by Victor Belenko  on 4/25/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CustomActivityContainer : NSObject
<UIActivityItemSource>

@property (nonatomic, strong) NSURL *url;

- (instancetype)initWithURL:(NSURL *)url;

@end
