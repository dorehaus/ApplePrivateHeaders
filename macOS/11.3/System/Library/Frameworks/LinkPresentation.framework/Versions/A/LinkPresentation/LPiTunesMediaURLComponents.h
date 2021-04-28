/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LPiTunesMediaURLComponents : NSObject {

	NSString* _identifier;
	NSString* _storefrontCountryCode;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontCountryCode;              //@synthesize storefrontCountryCode=_storefrontCountryCode - In the implementation block
+(id)identifierFromQueryItems:(id)arg1 pathComponent:(id)arg2 ;
+(id)storefrontCountryCodeFromPathComponent:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)storefrontCountryCode;
@end

