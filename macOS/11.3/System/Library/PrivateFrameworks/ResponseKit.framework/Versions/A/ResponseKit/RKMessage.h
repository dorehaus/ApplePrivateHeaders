/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/Versions/A/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ResponseKit/ResponseKit-Structs.h>
#import <ResponseKit/RKText.h>

@class NSString, NSUUID, NSDate;

@interface RKMessage : RKText {

	NSString* _title;
	NSUUID* _senderUUID;
	NSDate* _dateSent;
	unsigned long long _position;

}

@property (copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSUUID * senderUUID;                 //@synthesize senderUUID=_senderUUID - In the implementation block
@property (copy,readonly) NSDate * dateSent;                   //@synthesize dateSent=_dateSent - In the implementation block
@property (readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
-(unsigned long long)position;
-(NSString *)title;
-(NSDate *)dateSent;
-(id)initWithString:(id)arg1 title:(id)arg2 languageIdentifier:(id)arg3 senderUUID:(id)arg4 dateSent:(id)arg5 position:(unsigned long long)arg6 ;
-(void)annotateRange:(NSRange)arg1 type:(unsigned long long)arg2 field:(unsigned long long)arg3 ;
-(NSUUID *)senderUUID;
@end

