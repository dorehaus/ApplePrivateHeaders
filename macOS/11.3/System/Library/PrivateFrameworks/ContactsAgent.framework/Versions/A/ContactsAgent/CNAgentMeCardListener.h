/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAgent.framework/Versions/A/ContactsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact;

@interface CNAgentMeCardListener : NSObject {

	CNContact* _meContact;

}

@property (retain) CNContact * meContact; 
+(id)_sharedInstance;
+(id)meContact;
-(void)dealloc;
-(id)init;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(void)_meContactChanged:(id)arg1 ;
@end

