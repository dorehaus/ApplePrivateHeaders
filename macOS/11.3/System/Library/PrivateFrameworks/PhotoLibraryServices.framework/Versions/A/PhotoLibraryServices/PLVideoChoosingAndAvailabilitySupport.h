/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLVideoResourceContext, PLVideoChoosingAssetInformation, PLVideoChoosingOptions;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLVideoChoosingAndAvailabilitySupport : NSObject {

	id<PLVideoResourceContext> _context;
	id<PLVideoChoosingAssetInformation> _assetInformation;
	id<PLVideoChoosingOptions> _options;
	CGSize _size;

}

@property (nonatomic,readonly) id<PLVideoResourceContext> context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<PLVideoChoosingAssetInformation> assetInformation;              //@synthesize assetInformation=_assetInformation - In the implementation block
@property (nonatomic,readonly) id<PLVideoChoosingOptions> options;                                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) CGSize size;                                                       //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id<PLVideoChoosingOptions>)options;
-(id<PLVideoResourceContext>)context;
-(id)chooseResourceDownloadRequired:(char*)arg1 error:(id*)arg2 ;
-(id)initWithContext:(id)arg1 assetInformation:(id)arg2 options:(id)arg3 size:(CGSize)arg4 ;
-(id<PLVideoChoosingAssetInformation>)assetInformation;
-(id)_acceptableResourceVersions;
-(unsigned)_videoQualityLevelForRequest;
-(id)_ensureOriginalsAreHighestQuality:(id)arg1 ;
-(id)_chooseResourceDownloadRequired:(char*)arg1 error:(id*)arg2 ;
@end

