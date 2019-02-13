//
//  MediaWebView.h
//  PeggSite
//
//  Created by Victor Belenko  on 7/14/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MediaView : UIView

@property (nonatomic, weak) IBOutlet UIImageView *contentImageView;
@property (nonatomic, weak) IBOutlet UIWebView *webView;
@property (nonatomic, weak) IBOutlet UIView *textContentView;
@property (nonatomic, weak) IBOutlet PeggTextView *textView;
@property (nonatomic, weak) IBOutlet PeggLabel *titleLabel;
@property (nonatomic, strong) Article *article;

@end
