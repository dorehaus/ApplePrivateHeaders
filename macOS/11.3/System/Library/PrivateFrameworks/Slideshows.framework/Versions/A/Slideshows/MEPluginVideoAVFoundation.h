/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MEPlugin.h>
#import <libobjc.A.dylib/MEPluginRegistration.h>
#import <libobjc.A.dylib/MEPluginTypeVideo.h>

@class MERenderer, NSString, NSDictionary;

@interface MEPluginVideoAVFoundation : MEPlugin <MEPluginRegistration, MEPluginTypeVideo> {

	double _currentTime;
	double _frameRate;
	double _frameDuration;
	double _adjustedEndTime;
	double _endTime;
	double _timescale;
	SCD_Struct_ME38 _currentPresentationTime;
	MERenderer* _renderer;
	CGColorSpaceRef _sourceColorSpace;
	unsigned* _renderBuffer;
	NSString* _outputFileType;
	NSDictionary* _videoSettings;
	NSDictionary* _audioSettings;

}
+(void)registerPluginsToLoader:(id)arg1 ;
+(char)matchesOptions:(id)arg1 ;
-(void)dealloc;
-(void)_reportProgress:(double)arg1 ;
-(char)exportToFile:(id)arg1 withAudio:(id)arg2 andOptions:(id)arg3 error:(id*)arg4 ;
-(id)initWithIdentifier:(id)arg1 andDocument:(id)arg2 andDelegate:(id)arg3 ;
-(void)_configureSettingsWithPluginOptions:(id)arg1 andSize:(CGSize)arg2 ;
-(void)_setupExportForSize:(CGSize)arg1 ;
-(id)_makeCoverArtMetadataItemWithTime:(double)arg1 andFileType:(id)arg2 ;
-(short)_appendVideoFrameAtTime:(double)arg1 toBufferAdaptor:(id)arg2 ;
-(void)_cleanupExport;
-(void)_convertRGBAToARGB:(unsigned*)arg1 withBytesPerRow:(unsigned)arg2 ;
@end
