// 
// Wire
// Copyright (C) 2016 Wire Swiss GmbH
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program. If not, see http://www.gnu.org/licenses/.
// 


#import <Foundation/Foundation.h>


@class CenteredScrollView;
@protocol ZMConversationMessage;


@interface FullscreenImageViewController : UIViewController

@property (nonatomic, strong, readonly) UIImageView *imageView;
@property (nonatomic, strong, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) id<ZMConversationMessage> message;
@property (nonatomic, strong) UIView *snapshotBackgroundView;

- (instancetype)initWithMessage:(id<ZMConversationMessage>)message;

- (void)showChrome:(BOOL)shouldShow;

- (void)updateZoom;

@end
