/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:29 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBNotificationCenterWidgetHost <NSObject>
@property (assign,nonatomic,__weak) id<SBWidgetViewControllerDelegate> widgetDelegate; 
@optional
-(id<SBWidgetViewControllerDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id)arg1;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;

@end

