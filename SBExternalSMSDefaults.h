/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface SBExternalSMSDefaults : BSAbstractDefaultDomain

@property (nonatomic,readonly) unsigned long long iMChatUnreadConversationCount; 
@property (getter=isComposingNewMessage,nonatomic,readonly) BOOL composingNewMessage; 
@property (nonatomic,readonly) NSString * suspendedGroupId; 
-(void)setIMChatUnreadConversationCount:(unsigned long long)arg1 ;
-(unsigned long long)iMChatUnreadConversationCount;
-(void)setSuspendedGroupId:(NSString *)arg1 ;
-(NSString *)suspendedGroupId;
-(void)setComposingNewMessage:(BOOL)arg1 ;
-(BOOL)isComposingNewMessage;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

