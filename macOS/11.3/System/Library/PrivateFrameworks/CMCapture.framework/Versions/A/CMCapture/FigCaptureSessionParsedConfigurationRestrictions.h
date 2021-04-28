/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSArray;

@interface FigCaptureSessionParsedConfigurationRestrictions : NSObject {

	char _allowAllConfigurations;
	NSArray* _allowedConnectionMediaTypes;
	NSArray* _allowedConnectionMetadataIdentifiers;

}

@property (nonatomic,readonly) char allowAllConfigurations;                                 //@synthesize allowAllConfigurations=_allowAllConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * allowedConnectionMediaTypes;                       //@synthesize allowedConnectionMediaTypes=_allowedConnectionMediaTypes - In the implementation block
@property (nonatomic,readonly) NSArray * allowedConnectionMetadataIdentifiers;              //@synthesize allowedConnectionMetadataIdentifiers=_allowedConnectionMetadataIdentifiers - In the implementation block
-(void)dealloc;
-(id)initWithAllowedAVMediaTypes:(id)arg1 clientIsNonStandard:(char)arg2 ;
-(void)_parseRestrictionsWithAllowedAVMediaTypes:(id)arg1 clientIsNonStandard:(char)arg2 ;
-(id)initWithClientAuditToken:(SCD_Struct_Fi26)arg1 ;
-(NSArray *)allowedConnectionMediaTypes;
-(NSArray *)allowedConnectionMetadataIdentifiers;
-(char)allowAllConfigurations;
@end

