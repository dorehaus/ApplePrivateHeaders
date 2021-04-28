/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSError, NSObject, EKEventStore, NSArray, EKCalendar, NSMutableArray, NSMutableDictionary, NSMapTable, NSMutableSet, NSManagedObjectID, CalManagedObjectContext;

@interface EKICSImporter : NSObject {

	char _displayEventsInCalendar;
	char _asynchronous;
	char _importSuccessful;
	NSError* _importError;
	NSObject*<OS_dispatch_queue> _async_queue;
	/*^block*/id _selectCalendar;
	/*^block*/id _importFoundBackupFile;
	/*^block*/id _importDroppedReminders;
	/*^block*/id _makeDecision;
	/*^block*/id _importSetProgressValue;
	/*^block*/id _importSetProgressAsIndeterminate;
	unsigned long long _numInvalidEvents;
	EKEventStore* _eventStore;
	NSArray* _importFilePaths;
	EKCalendar* _calendar;
	unsigned long long _options;
	NSMutableArray* _localUIDIdentifiersToSelect;
	NSArray* _allCalendarUIDs;
	NSArray* _allSourceUIDs;
	NSMutableDictionary* _delegateItemIDsToSelect;
	NSMutableDictionary* _iCalFilesToImport;
	NSMutableArray* _vCalFilesToImport;
	NSMapTable* _calendarToICalFiles;
	NSMapTable* _calendarToITIPFiles;
	NSMapTable* _calendarToVCalFiles;
	NSMutableSet* _existingEventIDs;
	NSMutableDictionary* _iTIPFiles;
	NSMutableDictionary* _nonITIPFiles;
	NSMutableSet* _insertedItemIDs;
	NSMutableSet* _updatedtemIDs;
	NSMutableSet* _skippedItemIDs;
	NSManagedObjectID* _legacyCalManagedCalendarID;
	CalManagedObjectContext* _legacyContext;
	/*^block*/id _completionCallback;

}

@property (assign,nonatomic) char asynchronous;                                           //@synthesize asynchronous=_asynchronous - In the implementation block
@property (assign,nonatomic) char importSuccessful;                                       //@synthesize importSuccessful=_importSuccessful - In the implementation block
@property (assign,nonatomic) unsigned long long numInvalidEvents;                         //@synthesize numInvalidEvents=_numInvalidEvents - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                                   //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) NSArray * importFilePaths;                                 //@synthesize importFilePaths=_importFilePaths - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableArray * localUIDIdentifiersToSelect;                //@synthesize localUIDIdentifiersToSelect=_localUIDIdentifiersToSelect - In the implementation block
@property (nonatomic,retain) NSArray * allCalendarUIDs;                                   //@synthesize allCalendarUIDs=_allCalendarUIDs - In the implementation block
@property (nonatomic,retain) NSArray * allSourceUIDs;                                     //@synthesize allSourceUIDs=_allSourceUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * delegateItemIDsToSelect;               //@synthesize delegateItemIDsToSelect=_delegateItemIDsToSelect - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iCalFilesToImport;                     //@synthesize iCalFilesToImport=_iCalFilesToImport - In the implementation block
@property (nonatomic,retain) NSMutableArray * vCalFilesToImport;                          //@synthesize vCalFilesToImport=_vCalFilesToImport - In the implementation block
@property (nonatomic,retain) NSMapTable * calendarToICalFiles;                            //@synthesize calendarToICalFiles=_calendarToICalFiles - In the implementation block
@property (nonatomic,retain) NSMapTable * calendarToITIPFiles;                            //@synthesize calendarToITIPFiles=_calendarToITIPFiles - In the implementation block
@property (nonatomic,retain) NSMapTable * calendarToVCalFiles;                            //@synthesize calendarToVCalFiles=_calendarToVCalFiles - In the implementation block
@property (nonatomic,retain) NSMutableSet * existingEventIDs;                             //@synthesize existingEventIDs=_existingEventIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iTIPFiles;                             //@synthesize iTIPFiles=_iTIPFiles - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nonITIPFiles;                          //@synthesize nonITIPFiles=_nonITIPFiles - In the implementation block
@property (nonatomic,retain) NSMutableSet * insertedItemIDs;                              //@synthesize insertedItemIDs=_insertedItemIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedtemIDs;                                //@synthesize updatedtemIDs=_updatedtemIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * skippedItemIDs;                               //@synthesize skippedItemIDs=_skippedItemIDs - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * legacyCalManagedCalendarID;              //@synthesize legacyCalManagedCalendarID=_legacyCalManagedCalendarID - In the implementation block
@property (nonatomic,retain) CalManagedObjectContext * legacyContext;                     //@synthesize legacyContext=_legacyContext - In the implementation block
@property (nonatomic,copy) id completionCallback;                                         //@synthesize completionCallback=_completionCallback - In the implementation block
@property (nonatomic,retain) NSError * importError;                                       //@synthesize importError=_importError - In the implementation block
@property (assign,nonatomic) char displayEventsInCalendar;                                //@synthesize displayEventsInCalendar=_displayEventsInCalendar - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> async_queue;                    //@synthesize async_queue=_async_queue - In the implementation block
@property (nonatomic,copy) id selectCalendar;                                             //@synthesize selectCalendar=_selectCalendar - In the implementation block
@property (nonatomic,copy) id importFoundBackupFile;                                      //@synthesize importFoundBackupFile=_importFoundBackupFile - In the implementation block
@property (nonatomic,copy) id importDroppedReminders;                                     //@synthesize importDroppedReminders=_importDroppedReminders - In the implementation block
@property (nonatomic,copy) id makeDecision;                                               //@synthesize makeDecision=_makeDecision - In the implementation block
@property (nonatomic,copy) id importSetProgressValue;                                     //@synthesize importSetProgressValue=_importSetProgressValue - In the implementation block
@property (nonatomic,copy) id importSetProgressAsIndeterminate;                           //@synthesize importSetProgressAsIndeterminate=_importSetProgressAsIndeterminate - In the implementation block
+(id)importSaveQueue;
+(char)backupToPath:(id)arg1 backupRemoteCalendars:(char)arg2 error:(id*)arg3 ;
+(char)copyPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 required:(char)arg4 ;
+(id)allowedBackupFileTypes;
+(id)allowedImportFileTypes;
+(char)backupToPath:(id)arg1 error:(id*)arg2 ;
+(id)defaultBackupFileName;
-(EKCalendar *)calendar;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(char)asynchronous;
-(id)completionCallback;
-(void)setAsynchronous:(char)arg1 ;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)setCompletionCallback:(id)arg1 ;
-(id)_initWithFilePaths:(id)arg1 orderedCalendarUIDs:(id)arg2 orderedSourceUIDs:(id)arg3 eventStore:(id)arg4 calendar:(id)arg5 options:(unsigned long long)arg6 ;
-(void)_createImportHandle;
-(id)_getLegacyCalendarIDFromEKCalendar:(id)arg1 ;
-(char)_importWithCompletion:(/*^block*/id)arg1 asynchronous:(char)arg2 ;
-(char)importSuccessful;
-(id)_getImportedCalendarItems;
-(unsigned long long)numInvalidEvents;
-(NSError *)importError;
-(char)displayEventsInCalendar;
-(void)showEventsInCalendar;
-(NSArray *)importFilePaths;
-(unsigned long long)_separateFilesForImport:(id)arg1 ;
-(char)importICalFiles;
-(NSMutableDictionary *)iCalFilesToImport;
-(NSMutableArray *)vCalFilesToImport;
-(void)_separateICalFilesForITIP;
-(char)_sortFilesByImportCalendar;
-(void)_doImportFiles;
-(NSManagedObjectID *)legacyCalManagedCalendarID;
-(NSMutableDictionary *)iTIPFiles;
-(NSMutableDictionary *)nonITIPFiles;
-(id)_findCalendarForExistingEvent:(id)arg1 ;
-(CalManagedObjectContext *)legacyContext;
-(void)setImportError:(NSError *)arg1 ;
-(id)selectCalendar;
-(id)infoForNewCalendarForFiles:(id)arg1 forITIPFiles:(id)arg2 nonITIPFiles:(id)arg3 importContext:(id)arg4 ;
-(void)selectEventWithLocalUID:(id)arg1 ;
-(NSMutableSet *)insertedItemIDs;
-(NSMutableSet *)updatedtemIDs;
-(NSMutableSet *)skippedItemIDs;
-(NSMutableDictionary *)delegateItemIDsToSelect;
-(id)importFoundBackupFile;
-(NSMutableArray *)localUIDIdentifiersToSelect;
-(id)makeDecision;
-(void)setNumInvalidEvents:(unsigned long long)arg1 ;
-(void)setImportSuccessful:(char)arg1 ;
-(id)_doITIPFileImport;
-(id)_doVCSFileImportWasAborted:(char*)arg1 ;
-(NSMapTable *)calendarToVCalFiles;
-(void)_getResultIDsForContext:(id)arg1 saveSucceeded:(char*)arg2 contextName:(id)arg3 ;
-(NSMutableSet *)existingEventIDs;
-(NSObject*<OS_dispatch_queue>)async_queue;
-(id)importDroppedReminders;
-(NSMapTable *)calendarToICalFiles;
-(void)_doAsyncFileImportWithFinishBlock:(/*^block*/id)arg1 withChildContext:(id)arg2 ;
-(unsigned long long)_countEventsForImportFile:(id)arg1 ;
-(char)_message:(id)arg1 hasNewSelfOrganizedEventForCalendarID:(id)arg2 ;
-(id)importSetProgressValue;
-(id)importSetProgressAsIndeterminate;
-(char)_importVCSFile:(id)arg1 toCalendar:(id)arg2 inManagedObjectContext:(id)arg3 numReminders:(unsigned long long*)arg4 ;
-(char)_shouldFinalizeVCSImportInContext:(id)arg1 ;
-(void)_sanitizeVCSImportInContext:(id)arg1 ;
-(NSArray *)allSourceUIDs;
-(char)_isAnyAttendeeAddressFrom:(id)arg1 organizer:(id)arg2 equivalentTo:(id)arg3 ;
-(id)_matchingAttendeeAddressesFrom:(id)arg1 organizer:(id)arg2 inPrincipal:(id)arg3 ;
-(id)_guessImportCalendarRequiringSource:(id)arg1 ;
-(NSArray *)allCalendarUIDs;
-(id)initWithFilePaths:(id)arg1 orderedCalendarUIDs:(id)arg2 orderedSourceUIDs:(id)arg3 eventStore:(id)arg4 options:(unsigned long long)arg5 ;
-(id)initWithFilePaths:(id)arg1 calendar:(id)arg2 options:(unsigned long long)arg3 ;
-(void)asyncImportWithCompletion:(/*^block*/id)arg1 ;
-(void)syncImportWithCompletion:(/*^block*/id)arg1 ;
-(char)_findPreferredSourceForMessage:(id)arg1 inContext:(id)arg2 result:(id*)arg3 ;
-(char)_organizer:(id)arg1 matchesDomainForURL:(id)arg2 ;
-(id)_defaultImportCalendarRequiringSource:(id)arg1 ;
-(void)setDisplayEventsInCalendar:(char)arg1 ;
-(void)setAsync_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSelectCalendar:(id)arg1 ;
-(void)setImportFoundBackupFile:(id)arg1 ;
-(void)setImportDroppedReminders:(id)arg1 ;
-(void)setMakeDecision:(id)arg1 ;
-(void)setImportSetProgressValue:(id)arg1 ;
-(void)setImportSetProgressAsIndeterminate:(id)arg1 ;
-(void)setLocalUIDIdentifiersToSelect:(NSMutableArray *)arg1 ;
-(void)setAllCalendarUIDs:(NSArray *)arg1 ;
-(void)setAllSourceUIDs:(NSArray *)arg1 ;
-(void)setDelegateItemIDsToSelect:(NSMutableDictionary *)arg1 ;
-(void)setICalFilesToImport:(NSMutableDictionary *)arg1 ;
-(void)setVCalFilesToImport:(NSMutableArray *)arg1 ;
-(void)setCalendarToICalFiles:(NSMapTable *)arg1 ;
-(NSMapTable *)calendarToITIPFiles;
-(void)setCalendarToITIPFiles:(NSMapTable *)arg1 ;
-(void)setCalendarToVCalFiles:(NSMapTable *)arg1 ;
-(void)setExistingEventIDs:(NSMutableSet *)arg1 ;
-(void)setITIPFiles:(NSMutableDictionary *)arg1 ;
-(void)setNonITIPFiles:(NSMutableDictionary *)arg1 ;
-(void)setInsertedItemIDs:(NSMutableSet *)arg1 ;
-(void)setUpdatedtemIDs:(NSMutableSet *)arg1 ;
-(void)setSkippedItemIDs:(NSMutableSet *)arg1 ;
-(void)setLegacyCalManagedCalendarID:(NSManagedObjectID *)arg1 ;
-(void)setLegacyContext:(CalManagedObjectContext *)arg1 ;
@end

