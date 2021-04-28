/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSOrderedTab.h>

@class NSString, NSArray;

@interface WBSOrderedTestTab : NSObject <WBSOrderedTab> {

	char _isPinnedTab;
	char _shouldSelectOriginatingTabWhenClosed;
	char _closing;
	NSString* _identifier;
	NSArray* _ancestorTabIdentifiers;
	NSString* _windowIdentifier;
	double _lastActivationTime;

}

@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * ancestorTabIdentifiers;                         //@synthesize ancestorTabIdentifiers=_ancestorTabIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * windowIdentifier;                              //@synthesize windowIdentifier=_windowIdentifier - In the implementation block
@property (assign,nonatomic) char isPinnedTab;                                       //@synthesize isPinnedTab=_isPinnedTab - In the implementation block
@property (assign,nonatomic) char shouldSelectOriginatingTabWhenClosed;              //@synthesize shouldSelectOriginatingTabWhenClosed=_shouldSelectOriginatingTabWhenClosed - In the implementation block
@property (assign,getter=isClosing,nonatomic) char closing;                          //@synthesize closing=_closing - In the implementation block
@property (assign,nonatomic) double lastActivationTime;                              //@synthesize lastActivationTime=_lastActivationTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_nextTabID;
+(id)orderedTestTabWithParent:(id)arg1 ;
+(void)resetIDCounter;
-(NSString *)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(char)isClosing;
-(double)lastActivationTime;
-(void)setLastActivationTime:(double)arg1 ;
-(NSArray *)ancestorTabIdentifiers;
-(void)setWindowIdentifier:(NSString *)arg1 ;
-(void)setAncestorTabIdentifiers:(NSArray *)arg1 ;
-(NSString *)windowIdentifier;
-(char)isPinnedTab;
-(char)shouldSelectOriginatingTabWhenClosed;
-(void)setIsPinnedTab:(char)arg1 ;
-(void)setShouldSelectOriginatingTabWhenClosed:(char)arg1 ;
-(void)setClosing:(char)arg1 ;
@end

