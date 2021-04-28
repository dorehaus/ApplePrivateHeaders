/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMovie.h>

@class AVMutableMovieInternal, AVMediaDataStorage, NSArray;

@interface AVMutableMovie : AVMovie {

	AVMutableMovieInternal* _mutableMovieInternal;

}

@property (assign,getter=isModified,nonatomic) char modified; 
@property (nonatomic,copy) AVMediaDataStorage * defaultMediaDataStorage; 
@property (assign,nonatomic) SCD_Struct_CM3 interleavingPeriod; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) float preferredRate; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) int timescale; 
@property (nonatomic,readonly) NSArray * tracks; 
+(char)expectsPropertyRevisedNotifications;
+(id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)data;
-(id)URL;
-(id)fileType;
-(id)initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(SCD_Struct_CM3)duration;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(void)setModified:(char)arg1 ;
-(char)isModified;
-(NSArray *)tracks;
-(id)trackWithTrackID:(int)arg1 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(float)preferredRate;
-(float)preferredVolume;
-(CGAffineTransform)preferredTransform;
-(id)trackReferences;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_initializationOptions;
-(id)_mutableTracks;
-(void)insertEmptyTimeRange:(SCD_Struct_CM5)arg1 ;
-(void)removeTimeRange:(SCD_Struct_CM5)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_CM5)arg1 toDuration:(SCD_Struct_CM3)arg2 ;
-(void)removeTrack:(id)arg1 ;
-(id)mutableTrackCompatibleWithTrack:(id)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(OpaqueFigMutableMovieRef)_figMutableMovie;
-(void)_signalMetadataUpdated;
-(int)timescale;
-(void)setTimescale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(id)_initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4 ;
-(id)_initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(id)_initWithFigError:(int)arg1 userInfo:(id)arg2 ;
-(AVMediaDataStorage *)defaultMediaDataStorage;
-(id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 ;
-(id)initWithFileType:(id)arg1 copySettingsFromMovie:(id)arg2 options:(id)arg3 ;
-(void)_signalTracksUpdated;
-(SCD_Struct_CM3)interleavingPeriod;
-(void)setInterleavingPeriod:(SCD_Struct_CM3)arg1 ;
-(void)setDefaultMediaDataStorage:(AVMediaDataStorage *)arg1 ;
-(char)insertTimeRange:(SCD_Struct_CM5)arg1 ofAsset:(id)arg2 atTime:(SCD_Struct_CM3)arg3 copySampleData:(char)arg4 error:(id*)arg5 ;
-(id)_addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3 ;
-(id)addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3 ;
-(id)addMutableTracksCopyingSettingsFromTracks:(id)arg1 options:(id)arg2 ;
@end

