/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRKASMCredentialStore, NSString;

@interface CRKASMIdentityPicker : NSObject {

	CRKASMCredentialStore* _credentialStore;
	NSString* _userIdentifier;

}

@property (nonatomic,readonly) CRKASMCredentialStore * credentialStore;              //@synthesize credentialStore=_credentialStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * userIdentifier;                       //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) id<CRKIdentity> identity; 
-(NSString *)userIdentifier;
-(id<CRKIdentity>)identity;
-(id)manifest;
-(CRKASMCredentialStore *)credentialStore;
-(id)initWithCredentialStore:(id)arg1 userIdentifier:(id)arg2 ;
-(id)candidatePersistentIDsInManifest:(id)arg1 ;
-(id)pickIdentityFromCandidates:(id)arg1 manifest:(id)arg2 ;
-(char)isManifestEntryValid:(id)arg1 manifest:(id)arg2 ;
-(id)arrayBySortingPersistentIDs:(id)arg1 ;
-(id)pickIdentityFromOrderedCandidates:(id)arg1 manifest:(id)arg2 ;
@end
