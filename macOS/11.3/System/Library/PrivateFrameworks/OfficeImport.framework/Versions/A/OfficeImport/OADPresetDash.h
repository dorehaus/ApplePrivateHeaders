/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDash.h>

@interface OADPresetDash : OADDash {

	char mType;
	unsigned mIsTypeOverridden : 1;

}
+(id)defaultProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(char)arg1 ;
-(char)type;
-(id)initWithDefaults;
-(id)equivalentCustomDash;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(char)isAnythingOverridden;
-(char)isTypeOverridden;
@end

