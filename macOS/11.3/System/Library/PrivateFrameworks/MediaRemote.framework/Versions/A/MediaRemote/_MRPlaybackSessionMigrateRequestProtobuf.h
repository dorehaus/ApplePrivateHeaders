/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRContentItemProtobuf, NSMutableArray, _MRPlaybackSessionRequestProtobuf, _MRNowPlayingPlayerPathProtobuf, NSString;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying> {

	double _playbackPosition;
	double _playbackRate;
	_MRContentItemProtobuf* _contentItem;
	int _endpointOptions;
	NSMutableArray* _events;
	_MRPlaybackSessionRequestProtobuf* _playbackSessionRequest;
	int _playbackState;
	int _playerOptions;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSString* _requestID;
	char _allowFadeTransition;
	SCD_Struct_MR16 _has;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
