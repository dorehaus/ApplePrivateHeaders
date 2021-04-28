/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLVideoResource <NSObject>
@required
+(char)deviceSupportsHDR;
-(unsigned)version;
-(char)isStreamable;
-(char)isPlayable;
-(id)uniformTypeIdentifier;
-(char)isDownloadable;
-(char)isLocallyGeneratable;
-(id)fileURLIfLocal;
-(char)isDerivative;
-(char)isLocallyAvailable;
-(char)isHDROrSDRDependingOnMasterVideo;
-(char)isSDRFallback;
-(char)isHDRDerivative;
-(char)hasAssociatedMediaMetadata;
-(char)isMediumHighQuality;
-(char)isOriginalVideo;
-(char)isOriginalVideoComplement;
-(char)matchesOrExceedsQualityLevel:(unsigned)arg1;

@end
