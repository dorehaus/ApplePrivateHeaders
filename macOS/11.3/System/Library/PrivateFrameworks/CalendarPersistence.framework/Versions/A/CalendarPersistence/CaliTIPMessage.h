/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ETagObject.h>

@class NSData, CalDAVScheduleChangesProperty, NSString, ICSDocument, ICSEvent;

@interface CaliTIPMessage : NSObject <ETagObject> {

	NSData* _data;
	CalDAVScheduleChangesProperty* _scheduleChanges;
	NSString* _eTag;
	NSString* _filename;
	ICSDocument* _document;
	ICSEvent* _event;
	char _localImport;
	char _removeSchedulingIfNew;

}

@property (assign) char localImport;                                //@synthesize localImport=_localImport - In the implementation block
@property (assign) char removeSchedulingIfNew;                      //@synthesize removeSchedulingIfNew=_removeSchedulingIfNew - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)data;
-(long long)compare:(id)arg1 ;
-(id)calendar;
-(id)event;
-(id)document;
-(id)filename;
-(id)initWithData:(id)arg1 filename:(id)arg2 ;
-(id)occurrences;
-(id)eTag;
-(id)masterEvent;
-(id)scheduleChanges;
-(id)serverFilename;
-(void)setLocalImport:(char)arg1 ;
-(void)setRemoveSchedulingIfNew:(char)arg1 ;
-(char)localImport;
-(id)allOccurrences;
-(char)removeSchedulingIfNew;
-(id)initWithData:(id)arg1 filename:(id)arg2 eTag:(id)arg3 scheduleChanges:(id)arg4 ;
@end

