/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABCollectionAbstractAction.h>

@class NSDataDetector;

@interface ABCollectionOpenURLAction : ABCollectionAbstractAction {

	NSDataDetector* _urlDetector;

}

@property (retain) NSDataDetector * urlDetector;              //@synthesize urlDetector=_urlDetector - In the implementation block
-(void)executeWithTarget:(id)arg1 ;
-(void)makeURLDetectorIfNecessary;
-(NSDataDetector *)urlDetector;
-(void)setUrlDetector:(NSDataDetector *)arg1 ;
@end

