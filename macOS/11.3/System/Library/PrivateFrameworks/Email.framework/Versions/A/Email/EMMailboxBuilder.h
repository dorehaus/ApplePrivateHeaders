/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class EMMailbox;


@protocol EMMailboxBuilder <NSObject>
@property (assign,nonatomic) char canContainMessages; 
@property (assign,nonatomic,__weak) EMMailbox * parent; 
@property (assign,nonatomic) char descriptionUsesRealName; 
@required
-(EMMailbox *)parent;
-(void)setParent:(id)arg1;
-(char)descriptionUsesRealName;
-(char)canContainMessages;
-(void)setCanContainMessages:(char)arg1;
-(void)setDescriptionUsesRealName:(char)arg1;

@end

