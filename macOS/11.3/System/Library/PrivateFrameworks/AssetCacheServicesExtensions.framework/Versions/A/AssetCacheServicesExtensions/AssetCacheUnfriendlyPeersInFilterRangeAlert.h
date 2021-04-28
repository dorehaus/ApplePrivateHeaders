/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServicesExtensions.framework/Versions/A/AssetCacheServicesExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetCacheServicesExtensions/AssetCacheAlert.h>

@class NSArray;

@interface AssetCacheUnfriendlyPeersInFilterRangeAlert : AssetCacheAlert {

	unsigned long long _peerFilterRangeIndex;
	NSArray* _addresses;

}

@property (assign) unsigned long long peerFilterRangeIndex;              //@synthesize peerFilterRangeIndex=_peerFilterRangeIndex - In the implementation block
@property (retain) NSArray * addresses;                                  //@synthesize addresses=_addresses - In the implementation block
-(NSArray *)addresses;
-(id)externalRepresentation;
-(void)setAddresses:(NSArray *)arg1 ;
-(id)initWithExternalRepresentation:(id)arg1 ;
-(unsigned long long)peerFilterRangeIndex;
-(void)setPeerFilterRangeIndex:(unsigned long long)arg1 ;
-(id)initWithPeerFilterRangeIndex:(unsigned long long)arg1 addresses:(id)arg2 ;
-(id)verboseText;
-(id)sharingPrefsAnchor;
@end
