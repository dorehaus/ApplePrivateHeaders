/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKPlayerInternal.h>

@class GKPlayerInternal, NSString;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {

	GKPlayerInternal* _hostPlayerInternal;
	NSString* _guestIdentifier;

}

@property (nonatomic,retain) GKPlayerInternal * hostPlayerInternal;              //@synthesize hostPlayerInternal=_hostPlayerInternal - In the implementation block
+(char)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(id)playerID;
-(id)initWithHostPlayerInternal:(id)arg1 guestIdentifier:(id)arg2 ;
-(char)isGuestPlayer;
-(id)guestIdentifier;
-(GKPlayerInternal *)hostPlayerInternal;
-(void)setHostPlayerInternal:(GKPlayerInternal *)arg1 ;
-(void)setGuestIdentifier:(id)arg1 ;
@end
