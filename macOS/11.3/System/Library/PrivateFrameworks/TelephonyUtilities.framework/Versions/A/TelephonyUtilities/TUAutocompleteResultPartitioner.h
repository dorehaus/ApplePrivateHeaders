/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUSearchController, NSMutableArray;

@interface TUAutocompleteResultPartitioner : NSObject {

	TUSearchController* _searchController;
	NSMutableArray* _normalResultsArray;
	NSMutableArray* _foundInMailResultsArray;
	NSMutableArray* _foundOnServersResultsArray;

}

@property (nonatomic,retain) NSMutableArray * normalResultsArray;                      //@synthesize normalResultsArray=_normalResultsArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * foundInMailResultsArray;                 //@synthesize foundInMailResultsArray=_foundInMailResultsArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * foundOnServersResultsArray;              //@synthesize foundOnServersResultsArray=_foundOnServersResultsArray - In the implementation block
@property (__weak) TUSearchController * searchController;                              //@synthesize searchController=_searchController - In the implementation block
+(char)sourceTypeIsFoundInMail:(unsigned long long)arg1 ;
+(char)sourceTypeIsFoundOnServers:(unsigned long long)arg1 ;
-(id)init;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(id)searchResults;
-(void)addResult:(id)arg1 ;
-(NSMutableArray *)foundInMailResultsArray;
-(NSMutableArray *)foundOnServersResultsArray;
-(NSMutableArray *)normalResultsArray;
-(void)setNormalResultsArray:(NSMutableArray *)arg1 ;
-(void)setFoundInMailResultsArray:(NSMutableArray *)arg1 ;
-(void)setFoundOnServersResultsArray:(NSMutableArray *)arg1 ;
@end

