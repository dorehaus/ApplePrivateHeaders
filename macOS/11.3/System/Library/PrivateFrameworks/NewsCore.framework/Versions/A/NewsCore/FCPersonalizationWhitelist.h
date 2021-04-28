/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@class NTPBPersonalizationWhitelist, NSSet, NSDictionary;

@interface FCPersonalizationWhitelist : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {

	NTPBPersonalizationWhitelist* _pbWhitelist;
	NSSet* _portraitDisabledTagIDs;
	NSDictionary* _whitelist;

}

@property (nonatomic,retain) NSDictionary * whitelist;                    //@synthesize whitelist=_whitelist - In the implementation block
@property (nonatomic,retain) NSSet * portraitDisabledTagIDs;              //@synthesize portraitDisabledTagIDs=_portraitDisabledTagIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSDictionary * defaultTags; 
@property (nonatomic,readonly) NSDictionary * optionalTags; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWhitelist:(NSDictionary *)arg1 ;
-(NSDictionary *)whitelist;
-(NSDictionary *)defaultTags;
-(NSDictionary *)optionalTags;
-(id)jsonEncodableObject;
-(id)initWithPBPersonalizationWhitelist:(id)arg1 ;
-(NSSet *)portraitDisabledTagIDs;
-(void)setPortraitDisabledTagIDs:(NSSet *)arg1 ;
@end
