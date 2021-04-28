/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class ML3MusicLibrary, NSOutputStream;

@interface ML3ExportSession : NSData {

	ML3MusicLibrary* _library;
	NSOutputStream* _outputStream;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                  //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
-(NSOutputStream *)outputStream;
-(id)end;
-(id)begin:(unsigned)arg1 ;
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 outputStream:(id)arg2 ;
-(id)exportTrackAdded:(unsigned long long)arg1 ;
-(id)exportTrackUpdated:(unsigned long long)arg1 ;
-(id)exportTrackDeleted:(unsigned long long)arg1 ;
-(id)exportPlaylistAdded:(unsigned long long)arg1 ;
-(id)exportPlaylistDeleted:(unsigned long long)arg1 ;
@end

