/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAssetIdentifier;

@interface AVTrackIdentifier : NSObject <NSCopying> {

	int _trackID;
	AVAssetIdentifier* _assetID;

}

@property (nonatomic,readonly) AVAssetIdentifier * assetID;              //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) int trackID;                              //@synthesize trackID=_trackID - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
+(id)invalidTrackIdentifier;
+(id)identifierForTrack:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)isValid;
-(int)trackID;
-(id)initWithTrack:(id)arg1 ;
-(AVAssetIdentifier *)assetID;
-(char)matchesTrack:(id)arg1 ;
@end

