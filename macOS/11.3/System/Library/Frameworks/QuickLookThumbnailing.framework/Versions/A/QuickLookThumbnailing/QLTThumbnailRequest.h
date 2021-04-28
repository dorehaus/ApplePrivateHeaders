/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLCacheVersionedFileIdentifier, NSUUID, NSString;

@interface QLTThumbnailRequest : NSObject <NSCopying, NSSecureCoding> {

	char _shouldProvideFoldedGenericIcon;
	char _iconMode;
	char _wantsBaseline;
	int _flavor;
	QLCacheVersionedFileIdentifier* _fileIdentifier;
	NSUUID* _uuid;
	double _scale;
	NSString* _contentType;
	unsigned long long _badgeType;
	double _minimumDimension;
	long long _generationBehavior;
	unsigned long long _requestedTypes;
	CGSize _size;

}

@property (retain) NSUUID * uuid;                                                      //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) CGSize size;                                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                             //@synthesize scale=_scale - In the implementation block
@property (readonly) float maximumPixelSize; 
@property (readonly) QLCacheVersionedFileIdentifier * fileIdentifier;                  //@synthesize fileIdentifier=_fileIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                     //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) char shouldProvideFoldedGenericIcon;                      //@synthesize shouldProvideFoldedGenericIcon=_shouldProvideFoldedGenericIcon - In the implementation block
@property (assign,nonatomic) unsigned long long badgeType;                             //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,readonly) char provideGenericIcon; 
@property (nonatomic,readonly) char provideLowQualityThumbnail; 
@property (nonatomic,readonly) char provideFullResolutionThumbnail; 
@property (nonatomic,readonly) long long requestedMostRepresentativeType; 
@property (readonly) char iconMode;                                                    //@synthesize iconMode=_iconMode - In the implementation block
@property (assign) int flavor;                                                         //@synthesize flavor=_flavor - In the implementation block
@property (assign,nonatomic) double minimumDimension;                                  //@synthesize minimumDimension=_minimumDimension - In the implementation block
@property (assign) char wantsBaseline;                                                 //@synthesize wantsBaseline=_wantsBaseline - In the implementation block
@property (assign) long long generationBehavior;                                       //@synthesize generationBehavior=_generationBehavior - In the implementation block
@property (nonatomic,readonly) char provideCachedResultsOnly; 
@property (nonatomic,readonly) char forceGeneration; 
@property (assign,nonatomic) unsigned long long requestedTypes;                        //@synthesize requestedTypes=_requestedTypes - In the implementation block
+(char)supportsSecureCoding;
+(id)thumbnailRequestForFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 iconMode:(char)arg4 ;
+(id)thumbnailRequestForFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 iconMode:(char)arg4 error:(id*)arg5 ;
+(id)thumbnailRequestForFileAtURL:(id)arg1 size:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(char)arg5 ;
+(id)thumbnailRequestForFileAtURL:(id)arg1 size:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(char)arg5 error:(id*)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(double)scale;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)setScale:(double)arg1 ;
-(QLCacheVersionedFileIdentifier *)fileIdentifier;
-(double)minimumDimension;
-(void)setRequestedTypes:(unsigned long long)arg1 ;
-(void)setMinimumDimension:(double)arg1 ;
-(void)setWantsBaseline:(char)arg1 ;
-(char)wantsBaseline;
-(void)setGenerationBehavior:(long long)arg1 ;
-(long long)generationBehavior;
-(unsigned long long)badgeType;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(unsigned long long)requestedTypes;
-(long long)requestedMostRepresentativeType;
-(char)iconMode;
-(float)maximumPixelSize;
-(char)provideGenericIcon;
-(char)provideLowQualityThumbnail;
-(char)provideFullResolutionThumbnail;
-(char)provideCachedResultsOnly;
-(char)forceGeneration;
-(int)flavor;
-(void)setFlavor:(int)arg1 ;
-(id)initWithVersionedFileIdentifier:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 iconMode:(char)arg4 flavor:(int)arg5 wantsBaseline:(char)arg6 minimumDimension:(double)arg7 requestedTypes:(unsigned long long)arg8 ;
-(id)computeContentType;
-(char)shouldProvideFoldedGenericIcon;
-(void)setShouldProvideFoldedGenericIcon:(char)arg1 ;
@end
