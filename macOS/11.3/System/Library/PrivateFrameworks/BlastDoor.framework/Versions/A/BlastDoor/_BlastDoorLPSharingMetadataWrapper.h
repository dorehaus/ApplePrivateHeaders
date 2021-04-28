/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/Versions/A/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _BlastDoorLPLinkMetadata;

@interface _BlastDoorLPSharingMetadataWrapper : NSObject <NSSecureCoding> {

	char _hasFetchedSubresources;
	char _hasCompletedFetch;
	_BlastDoorLPLinkMetadata* _metadata;

}

@property (nonatomic,retain) _BlastDoorLPLinkMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) char hasFetchedSubresources;                      //@synthesize hasFetchedSubresources=_hasFetchedSubresources - In the implementation block
@property (assign,nonatomic) char hasCompletedFetch;                           //@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentation;
-(_BlastDoorLPLinkMetadata *)metadata;
-(void)setMetadata:(_BlastDoorLPLinkMetadata *)arg1 ;
-(char)hasFetchedSubresources;
-(void)setHasFetchedSubresources:(char)arg1 ;
-(char)hasCompletedFetch;
-(void)setHasCompletedFetch:(char)arg1 ;
@end

