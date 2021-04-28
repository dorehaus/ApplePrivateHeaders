/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUMetadataCache;

@interface TUMetadataClientController : NSObject {

	TUMetadataCache* _metadataCache;

}

@property (nonatomic,retain) TUMetadataCache * metadataCache;              //@synthesize metadataCache=_metadataCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)updateMetadataForRecentCalls:(id)arg1 ;
-(TUMetadataCache *)metadataCache;
-(id)_metadataDestinationIdForSearchItem:(id)arg1 ;
-(id)suggestionForDestinationID:(id)arg1 ;
-(id)locationForDestinationID:(id)arg1 ;
-(id)directoryLabelForDestinationID:(id)arg1 ;
-(void)updateMetadataForDestinationID:(id)arg1 ;
-(id)suggestionForSearchItem:(id)arg1 ;
-(id)locationForSearchItem:(id)arg1 ;
-(id)directoryLabelForSearchItem:(id)arg1 ;
-(void)updateMetadataForCall:(id)arg1 ;
-(void)setMetadataCache:(TUMetadataCache *)arg1 ;
@end

