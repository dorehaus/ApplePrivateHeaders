/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/Versions/A/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrustedPeers/TrustedPeers-Structs.h>
@class TPPeerPermanentInfo, TPPeerStableInfo, TPPeerDynamicInfo, NSData, NSString, NSSet;

@interface TPPeer : NSObject {

	TPPeerPermanentInfo* _permanentInfo;
	TPPeerStableInfo* _stableInfo;
	TPPeerDynamicInfo* _dynamicInfo;
	NSData* _wrappedPrivateKeys;

}

@property (nonatomic,retain) TPPeerPermanentInfo * permanentInfo;              //@synthesize permanentInfo=_permanentInfo - In the implementation block
@property (nonatomic,retain) TPPeerStableInfo * stableInfo;                    //@synthesize stableInfo=_stableInfo - In the implementation block
@property (nonatomic,retain) TPPeerDynamicInfo * dynamicInfo;                  //@synthesize dynamicInfo=_dynamicInfo - In the implementation block
@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,retain) NSData * wrappedPrivateKeys;                      //@synthesize wrappedPrivateKeys=_wrappedPrivateKeys - In the implementation block
@property (nonatomic,readonly) NSSet * trustedPeerIDs; 
-(id)initWithPermanentInfo:(id)arg1 ;
-(long long)updateStableInfo:(id)arg1 ;
-(long long)updateDynamicInfo:(id)arg1 ;
-(NSData *)wrappedPrivateKeys;
-(void)setWrappedPrivateKeys:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)peerID;
-(TPPeerStableInfo *)stableInfo;
-(TPPeerDynamicInfo *)dynamicInfo;
-(TPPeerPermanentInfo *)permanentInfo;
-(void)setDynamicInfo:(TPPeerDynamicInfo *)arg1 ;
-(void)setStableInfo:(TPPeerStableInfo *)arg1 ;
-(void)setPermanentInfo:(TPPeerPermanentInfo *)arg1 ;
-(NSSet *)trustedPeerIDs;
@end

