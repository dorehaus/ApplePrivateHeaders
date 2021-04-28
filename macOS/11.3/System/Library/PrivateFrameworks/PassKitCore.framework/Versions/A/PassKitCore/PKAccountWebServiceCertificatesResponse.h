/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray, NSString;

@interface PKAccountWebServiceCertificatesResponse : PKAccountWebServiceResponse {

	char _devSigned;
	NSArray* _encryptionCertificates;
	NSString* _encryptionVersion;

}

@property (nonatomic,copy,readonly) NSArray * encryptionCertificates;              //@synthesize encryptionCertificates=_encryptionCertificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * encryptionVersion;                  //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
@property (assign,nonatomic) char devSigned;                                       //@synthesize devSigned=_devSigned - In the implementation block
-(id)initWithData:(id)arg1 ;
-(char)devSigned;
-(void)setDevSigned:(char)arg1 ;
-(NSArray *)encryptionCertificates;
-(NSString *)encryptionVersion;
@end

