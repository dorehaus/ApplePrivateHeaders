/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLGoogleLegacyTokenMigrationResponse.h>

@class NSString;

@interface SLGoogleLegacyTokenMigrationTokenResponse : SLGoogleLegacyTokenMigrationResponse {

	NSString* _token;
	NSString* _errorMessage;

}

@property (readonly) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(NSString *)token;
-(NSString *)errorMessage;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
@end

