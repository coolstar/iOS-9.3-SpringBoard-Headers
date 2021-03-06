/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAppSwitcherPageView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class SBIconViewMap, SBIconView, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface SBSideSwitcherPageView : SBAppSwitcherPageView <UIGestureRecognizerDelegate> {

	BOOL _shouldShowAppIconAsOverlay;
	BOOL _isShowingAppIconAsOverlay;
	BOOL _isActivating;
	SBIconViewMap* _iconViewMap;
	SBIconView* _iconViewSetAsOverlay;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UILongPressGestureRecognizer* _pressDownGestureRecognizer;

}

@property (assign,nonatomic,__weak) id<SBSideSwitcherPageViewDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldShowAppIconAsOverlay;                                 //@synthesize shouldShowAppIconAsOverlay=_shouldShowAppIconAsOverlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGAffineTransform)_overlayTransform;
-(void)prepareToBecomeVisibleIfNecessary;
-(void)respondToBecomingInvisibleIfNecessary;
-(void)_handlePressDownGesture:(id)arg1 ;
-(void)_configureAppIconAsOverlayIfNecessary;
-(void)_removeAppIconAsOverlayIfNecessary;
-(void)_squishAfterDelay:(double)arg1 ;
-(void)_unsquishAfterDelay:(double)arg1 ;
-(BOOL)shouldShowAppIconAsOverlay;
-(void)setShouldShowAppIconAsOverlay:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBSideSwitcherPageViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SBSideSwitcherPageViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)invalidate;
-(void)_handleTapGesture:(id)arg1 ;
-(void)_handleLongPressGesture:(id)arg1 ;
@end

