/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <Geode/PA2DBufferMutableTile.h>

@interface PA2DBufferPurgeableTile : PA2DBufferMutableTile {

	int _pendingPurgeLevel;
	unsigned long long _accessCount;
	unsigned long long _appliedAccessCount;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)accessCount;
-(void)setPurgeLevel:(int)arg1 ;
-(char)beginAccess;
-(void)beginAccess:(/*^block*/id)arg1 ;
-(void)endAccess;
-(id)initWithEmptyData:(id)arg1 bounds:(PFIntRect_st)arg2 bytesPerRow:(long long)arg3 format:(int)arg4 fill:(id)arg5 ;
-(id)newTileWithBounds:(PFIntRect_st)arg1 bytesPerRow:(long long)arg2 ;
-(id)newMutableDataWithLength:(unsigned long long)arg1 ;
-(id)_copyObject:(id)arg1 ;
@end
