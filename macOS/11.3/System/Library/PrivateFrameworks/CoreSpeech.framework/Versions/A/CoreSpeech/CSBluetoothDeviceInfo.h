/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CSBluetoothDeviceInfo : NSObject {

	char _supportDoAP;
	char _isTemporaryPairedNotInContacts;
	NSString* _address;

}

@property (nonatomic,copy) NSString * address;                                 //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) char supportDoAP;                                 //@synthesize supportDoAP=_supportDoAP - In the implementation block
@property (assign,nonatomic) char isTemporaryPairedNotInContacts;              //@synthesize isTemporaryPairedNotInContacts=_isTemporaryPairedNotInContacts - In the implementation block
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(char)supportDoAP;
-(char)isTemporaryPairedNotInContacts;
-(void)setSupportDoAP:(char)arg1 ;
-(void)setIsTemporaryPairedNotInContacts:(char)arg1 ;
@end
