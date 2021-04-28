/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _tokenDetailMap;
	NSMutableDictionary* _detailTokenMap;

}
+(char)supportsSecureCoding;
+(id)matchedDetailsWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3 ;
-(id)matchedDetailsForToken:(id)arg1 ;
-(id)tokensForDetail:(id)arg1 ;
-(void)_processRawData:(id)arg1 tokens:(id)arg2 contact:(id)arg3 ;
-(id)_contactDetailFromContact:(id)arg1 column:(unsigned)arg2 detailEntityId:(id)arg3 ;
-(char)isEqualToMatchedDetails:(id)arg1 ;
@end

