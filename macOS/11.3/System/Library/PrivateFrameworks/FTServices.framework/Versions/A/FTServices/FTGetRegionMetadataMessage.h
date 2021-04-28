/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying> {

	NSString* _language;
	NSDictionary* _responseRegionInformation;

}

@property (copy) NSString * language;                                   //@synthesize language=_language - In the implementation block
@property (copy) NSDictionary * responseRegionInformation;              //@synthesize responseRegionInformation=_responseRegionInformation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(long long)command;
-(id)messageBody;
-(long long)responseCommand;
-(id)requiredKeys;
-(char)wantsHTTPHeaders;
-(char)wantsBinaryPush;
-(char)wantsCompressedBody;
-(char)wantsHTTPGet;
-(char)wantsBagKey;
-(id)bagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSDictionary *)responseRegionInformation;
-(void)setResponseRegionInformation:(NSDictionary *)arg1 ;
@end

