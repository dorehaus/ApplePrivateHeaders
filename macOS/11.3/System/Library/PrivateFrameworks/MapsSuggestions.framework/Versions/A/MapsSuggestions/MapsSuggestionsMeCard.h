/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface MapsSuggestionsMeCard : NSObject <NSCopying> {

	NSDictionary* _perCNPostalAddress;
	char _hasCorrected;
	char _hasGeocoded;
	char _hasHomeOrWork;
	char _hasHomeOrWorkOrSchool;
	NSArray* _shortcutsForHome;
	NSArray* _shortcutsForWork;
	NSArray* _shortcutsForSchool;
	NSArray* _hiddenShortcutsForHome;
	NSArray* _hiddenShortcutsForWork;
	NSArray* _hiddenShortcutsForSchool;
	NSArray* _shortcutsForAll;
	NSArray* _shortcutsForAllIncludingHidden;
	NSArray* _mapItemsForHome;
	NSArray* _mapItemsForWork;
	NSArray* _mapItemsForSchool;
	NSArray* _mapItemsForAll;

}

@property (nonatomic,readonly) NSArray * shortcutsForHome;                            //@synthesize shortcutsForHome=_shortcutsForHome - In the implementation block
@property (nonatomic,readonly) NSArray * shortcutsForWork;                            //@synthesize shortcutsForWork=_shortcutsForWork - In the implementation block
@property (nonatomic,readonly) NSArray * shortcutsForSchool;                          //@synthesize shortcutsForSchool=_shortcutsForSchool - In the implementation block
@property (nonatomic,readonly) NSArray * hiddenShortcutsForHome;                      //@synthesize hiddenShortcutsForHome=_hiddenShortcutsForHome - In the implementation block
@property (nonatomic,readonly) NSArray * hiddenShortcutsForWork;                      //@synthesize hiddenShortcutsForWork=_hiddenShortcutsForWork - In the implementation block
@property (nonatomic,readonly) NSArray * hiddenShortcutsForSchool;                    //@synthesize hiddenShortcutsForSchool=_hiddenShortcutsForSchool - In the implementation block
@property (nonatomic,readonly) NSArray * shortcutsForAll;                             //@synthesize shortcutsForAll=_shortcutsForAll - In the implementation block
@property (nonatomic,readonly) NSArray * shortcutsForAllIncludingHidden;              //@synthesize shortcutsForAllIncludingHidden=_shortcutsForAllIncludingHidden - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForHome;                             //@synthesize mapItemsForHome=_mapItemsForHome - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForWork;                             //@synthesize mapItemsForWork=_mapItemsForWork - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForSchool;                           //@synthesize mapItemsForSchool=_mapItemsForSchool - In the implementation block
@property (nonatomic,readonly) NSArray * mapItemsForAll;                              //@synthesize mapItemsForAll=_mapItemsForAll - In the implementation block
@property (nonatomic,readonly) char hasCorrected;                                     //@synthesize hasCorrected=_hasCorrected - In the implementation block
@property (nonatomic,readonly) char hasGeocoded;                                      //@synthesize hasGeocoded=_hasGeocoded - In the implementation block
@property (nonatomic,readonly) char hasHomeOrWork;                                    //@synthesize hasHomeOrWork=_hasHomeOrWork - In the implementation block
@property (nonatomic,readonly) char hasHomeOrWorkOrSchool;                            //@synthesize hasHomeOrWorkOrSchool=_hasHomeOrWorkOrSchool - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(char)hasCorrected;
-(id)initWithShortcuts:(id)arg1 perCNPostalAddress:(id)arg2 hasCorrected:(char)arg3 hasGeocoded:(char)arg4 ;
-(char)hasHomeOrWorkOrSchool;
-(char)isEqualToMeCard:(id)arg1 ;
-(id)shortcutForCNPostalAddressIdentifier:(id)arg1 ;
-(NSArray *)shortcutsForAll;
-(id)shortcutsPerCNPostalAddress;
-(char)hasGeocoded;
-(NSArray *)shortcutsForAllIncludingHidden;
-(id)initWithShortcuts:(id)arg1 hasCorrected:(char)arg2 hasGeocoded:(char)arg3 ;
-(NSArray *)shortcutsForHome;
-(NSArray *)shortcutsForWork;
-(NSArray *)shortcutsForSchool;
-(NSArray *)hiddenShortcutsForHome;
-(NSArray *)hiddenShortcutsForWork;
-(NSArray *)hiddenShortcutsForSchool;
-(NSArray *)mapItemsForHome;
-(NSArray *)mapItemsForWork;
-(NSArray *)mapItemsForSchool;
-(NSArray *)mapItemsForAll;
-(char)hasHomeOrWork;
@end
