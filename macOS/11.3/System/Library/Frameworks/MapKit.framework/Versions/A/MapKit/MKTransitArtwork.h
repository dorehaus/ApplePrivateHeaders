/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>

@protocol GEOTransitShieldDataSource, GEOTransitIconDataSource, GEOTransitTextDataSource;
@class NSString;

@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource> {

	NSString* _accessibilityText;
	char _hasRoutingIncidentBadge;
	int _artworkSourceType;
	int _artworkUseType;
	id<GEOTransitShieldDataSource> _shieldDataSource;
	id<GEOTransitIconDataSource> _iconDataSource;
	id<GEOTransitShieldDataSource> _iconFallbackShieldDataSource;
	id<GEOTransitTextDataSource> _textDataSource;

}

@property (nonatomic,readonly) int artworkSourceType;                                                    //@synthesize artworkSourceType=_artworkSourceType - In the implementation block
@property (nonatomic,readonly) int artworkUseType;                                                       //@synthesize artworkUseType=_artworkUseType - In the implementation block
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource;                          //@synthesize shieldDataSource=_shieldDataSource - In the implementation block
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource;                              //@synthesize iconDataSource=_iconDataSource - In the implementation block
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;              //@synthesize iconFallbackShieldDataSource=_iconFallbackShieldDataSource - In the implementation block
@property (nonatomic,readonly) id<GEOTransitTextDataSource> textDataSource;                              //@synthesize textDataSource=_textDataSource - In the implementation block
@property (nonatomic,readonly) char hasRoutingIncidentBadge;                                             //@synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)artworkWithShield:(id)arg1 accessibilityText:(id)arg2 ;
+(id)artworkWithText:(id)arg1 ;
+(id)artworkWithIcon:(id)arg1 accessibilityText:(id)arg2 ;
-(int)artworkSourceType;
-(int)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(id<GEOTransitTextDataSource>)textDataSource;
-(char)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
-(id)initWithShield:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithText:(id)arg1 ;
-(id)initWithIcon:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithIcon:(id)arg1 fallbackShield:(id)arg2 accessibilityText:(id)arg3 ;
@end

