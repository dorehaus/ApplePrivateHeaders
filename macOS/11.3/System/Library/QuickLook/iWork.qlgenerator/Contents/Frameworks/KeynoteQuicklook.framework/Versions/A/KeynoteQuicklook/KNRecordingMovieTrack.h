/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSPersistence/TSPObject.h>

@class NSArray;

@interface KNRecordingMovieTrack : TSPObject {

	NSArray* _movieSegments;
	char _isMovieSegmentDataTrimmedToDuration;

}

@property (nonatomic,readonly) NSArray * movieSegments;              //@synthesize movieSegments=_movieSegments - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(void)saveToArchive:(RecordingMovieTrackArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const RecordingMovieTrackArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(NSArray *)movieSegments;
-(id)initWithContext:(id)arg1 movieSegments:(id)arg2 ;
-(id)movieSegmentToTrimWhenReplacingAfterTime:(double)arg1 trimDuration:(out double*)arg2 ;
-(id)movieTrackByReplacingAfterTime:(double)arg1 withMovieTrack:(id)arg2 trimmedMovieSegment:(id)arg3 ;
@end

