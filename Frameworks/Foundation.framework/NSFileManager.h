/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/PLFileManager.h>

@class NSValue, NSURL, NSString;

@interface NSFileManager : NSObject <PLFileManager> {

	id _delegate;
	NSValue* _weakDelegateValue;

}

@property (readonly) BOOL crk_isStudentdInstalled; 
@property (nonatomic,readonly) NSURL * feedbackLoggerDirectoryURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * homeDirectoryForCurrentUser; 
@property (copy,readonly) NSURL * temporaryDirectory; 
@property (assign) id<NSFileManagerDelegate> delegate; 
@property (copy,readonly) NSString * currentDirectoryPath; 
@property (copy,readonly) id<NSObject><NSCopying><NSCoding> ubiquityIdentityToken; 
+(id)defaultsDomain;
+(id)userCacheDirectoryPath;
+(id)wifiCacheDirectoryPath;
+(id)temporaryFileURLWithExtension:(id)arg1 ;
+(id)temporaryFilePathWithExtension:(id)arg1 ;
+(id)temporaryFilePathWithExtension:(id)arg1 ;
+(id)crk_nonContainerizedHomeDirectoryURL;
+(id)crk_computeNonContainerizedHomeDirectoryURL;
+(id)multiUserDelegate;
+(void)setMultiUserDelegate:(id)arg1 ;
+(id)_web_createTemporaryFileForQuickLook:(id)arg1 ;
+(BOOL)ensureDirectoryExists:(id)arg1 ;
+(id)cacheDirectoryPathWithName:(id)arg1 ;
+(BOOL)_storeMovePath:(id)arg1 toPath:(id)arg2 ;
+(id)mf_defaultVolumeMountPoint;
+(id)mimeTypeForFile:(id)arg1 ;
+(void)_QLTRemoveTemporaryDirectoryAtURL:(id)arg1 ;
+(BOOL)ams_ensureDirectoryExists:(id)arg1 ;
+(BOOL)fm_setDataProtectionClass:(long long)arg1 forFileURL:(id)arg2 error:(id*)arg3 ;
+(id)defaultManager;
-(BOOL)tsu_grantUserWritePosixPermissionAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)tsu_linkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)sfu_directoryUsage:(id)arg1 ;
-(BOOL)sfup_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 shouldUpdateAttributesHandler:(/*^block*/id)arg5 ;
-(unsigned long long)sfu_pathUsage:(id)arg1 ;
-(BOOL)sfu_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 ;
-(unsigned long long)tv_onDiskSizeOfFileAtPath:(id)arg1 status:(int*)arg2 ;
-(unsigned long long)tv_onDiskSizeOfDirectoryAtPath:(id)arg1 status:(int*)arg2 ;
-(BOOL)tsu_grantUserWritePosixPermissionAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)tsu_linkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)sfu_directoryUsage:(id)arg1 ;
-(BOOL)sfup_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 shouldUpdateAttributesHandler:(/*^block*/id)arg5 ;
-(unsigned long long)sfu_pathUsage:(id)arg1 ;
-(BOOL)sfu_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)tsu_makeWritableItemAtURL:(id)arg1 permissionsOverride:(id)arg2 resetCreationDate:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)tsu_canCloneItemAtURL:(id)arg1 toURL:(id)arg2 ;
-(id)tsu_containerURLForDefaultSecurityApplicationGroupIdentifier;
-(BOOL)tsu_replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6 ;
-(void)tsu_removeContentsOfDirectoryAtURL:(id)arg1 reason:(id)arg2 urlsToExclude:(id)arg3 logContext:(id)arg4 ;
-(id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3 ;
-(id)createTemporaryDirectoryAppropriateForForPath:(id)arg1 error:(id*)arg2 ;
-(id)incrementalURLInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3 ;
-(BOOL)copySource:(id)arg1 toDestination:(id)arg2 withProgressionBlock:(/*^block*/id)arg3 ;
-(id)unarchiveItemAtPath:(id)arg1 toDirectory:(id)arg2 withProgressionBlock:(/*^block*/id)arg3 ;
-(id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3 ;
-(BOOL)createDirectoryIfNecessary:(id)arg1 ;
-(BOOL)crk_isStudentdInstalled;
-(BOOL)crk_safeRemoveItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id)crk_collisionAvoidingURLForURL:(id)arg1 ;
-(id)crk_deepContentsOfDirectoryAtPath:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setExtendedAttributeData:(id)arg1 forKey:(id)arg2 atURL:(id)arg3 error:(id*)arg4 ;
-(id)dataForExtendedAttribute:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)setExtendedAttributeValue:(id)arg1 forKey:(id)arg2 atURL:(id)arg3 error:(id*)arg4 ;
-(id)stringForExtendedAttribute:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
-(id)importExportDirectory;
-(BOOL)enoughSpaceToExportProject:(unsigned long long)arg1 ;
-(id)contentsOfSharedMediaDirectory;
-(id)sharedMediaDirectory;
-(id)itunesExportedProjectsTrashDirectory;
-(id)trashDirectory;
-(id)modificationDate:(id)arg1 ;
-(id)privateDocumentsDirectory;
-(unsigned long long)sizeOfFileAtPath:(id)arg1 ;
-(unsigned long long)freeBytesOnDisk;
-(id)localPrivateDocumentsDirectory;
-(id)ubiquityContainer;
-(BOOL)enoughSpaceToEditProjects;
-(id)sharedAudioDirectory;
-(id)pathAfterAssetLibraryCopy:(id)arg1 dest:(id)arg2 ;
-(id)pathAfterMediaPlayerCopy:(id)arg1 dest:(id)arg2 ;
-(BOOL)enoughSpaceToRecordMedia;
-(id)cloudImportDirectory;
-(id)renderedAdjustmentsDirectory;
-(id)localTheaterDirectory;
-(id)contentsOfPrivateDocumentsDirectory;
-(id)contentsOfImportExportDirectory;
-(id)allProjectPlistPathsExcludingPath:(id)arg1 ;
-(id)uniquePathFromPath:(id)arg1 ;
-(BOOL)copyFileFromAssetLibrary:(id)arg1 toFolder:(id)arg2 ;
-(BOOL)copyAudioFileFromMediaPlayerURL:(id)arg1 toFolder:(id)arg2 ;
-(long long)_gkReadXattrBytes:(void*)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4 ;
-(void)_gkWriteXattrBytes:(void*)arg1 count:(unsigned long long)arg2 withName:(id)arg3 path:(id)arg4 ;
-(void)_gkRemoveXattrNamed:(id)arg1 path:(id)arg2 ;
-(double)_gkExpirationIntervalOfFileAtPath:(id)arg1 ;
-(void)_gkSetExpirationInterval:(double)arg1 ofFileAtPath:(id)arg2 ;
-(id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)hd_removeSQLiteDatabaseAtURL:(id)arg1 preserveCopy:(BOOL)arg2 ;
-(BOOL)hd_removeHFDDatabaseAtURL:(id)arg1 preserveCopy:(BOOL)arg2 ;
-(BOOL)_hd_removeDatabaseFilesAtDatabaseURL:(id)arg1 extensionSuffixes:(id)arg2 preserveCopy:(BOOL)arg3 ;
-(BOOL)rc_fileExistsAndIsInValidRecordingURL:(id)arg1 ;
-(long long)rc_dataProtectionKeyBagState;
-(BOOL)rc_isRestrictedByFileProtectionFromCreatingItemsInDirectory:(id)arg1 ;
-(BOOL)rc_isRestrictedByFileProtectionFromWritingAtPath:(id)arg1 ;
-(id)rc_uniqueFileSystemURLWithPreferredURL:(id)arg1 uniquenessFormatString:(id)arg2 ;
-(BOOL)rc_isRestrictedByFileProtectionFromReadingAtPath:(id)arg1 ;
-(BOOL)setDefaultFileProtectionAtDocumentURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)setDefaultFileProtectionForDirectoryPath:(id)arg1 error:(id*)arg2 ;
-(void)assertDefaultFileProtectionAtDocumentURL:(id)arg1 ;
-(BOOL)changeFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)hasAtLeastFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3 ;
-(BOOL)grantUserWritePosixPermissionAtPath:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)directoryUsage:(id)arg1 ;
-(BOOL)_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 shouldUpdateAttributesHandler:(/*^block*/id)arg5 ;
-(BOOL)_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)_fileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 passesTest:(/*^block*/id)arg3 ;
-(BOOL)_fileProtection:(id)arg1 isGreaterThan:(id)arg2 ;
-(void)_logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 indent:(id)arg3 ;
-(unsigned long long)pathUsage:(id)arg1 ;
-(BOOL)applyFileAttributesFromDocumentAtURL:(id)arg1 toDocumentAtURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)hasAtMostFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3 ;
-(void)logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 ;
-(id)_srTempPath;
-(id)dateSuffix;
-(long long)_srDeleteFilesOlderThanTimeToLiveInSeconds:(double)arg1 ;
-(unsigned long long)_srDeviceFreeDiskSpace;
-(long long)_srSizeOfTempDir:(id*)arg1 ;
-(void)_srSetupTempDirectory;
-(id)outputPath:(BOOL)arg1 bundleID:(id)arg2 ;
-(id)trimmedOutputPath:(id)arg1 ;
-(long long)_srDeleteAllTempFiles;
-(void)_srRemoveFile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_srMoveFileFromURL:(id)arg1 toURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_srDeleteFilesWithPrefix:(id)arg1 ;
-(id)_srGetCreationDateForFile:(id)arg1 ;
-(BOOL)_srDeviceHasSufficientFreeSpaceForRecording;
-(BOOL)_srDeviceHasSufficientSpaceForCurrentRecording;
-(BOOL)fc_removeContentsOfDirectoryAtURL:(id)arg1 ;
-(unsigned long long)fc_sizeOfItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)fc_quicklyClearDirectory:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)__im_setiCloudBackupAttribute:(BOOL)arg1 onItemAtPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)__im_getiCloudBackupAttributeForItemAtPath:(id)arg1 attributeValue:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)__im_isPathOnMissingVolume:(id)arg1 ;
-(BOOL)__im_setiCloudBackupAttribute:(BOOL)arg1 onDirectoryAndChildrenAtPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)__im_makeDirectoriesInPath:(id)arg1 mode:(unsigned)arg2 ;
-(BOOL)__im_getItemsRemovedFromiCloudBackupsAtDirectoryPath:(id)arg1 outPaths:(id*)arg2 outRemovedPaths:(id*)arg3 error:(id*)arg4 ;
-(id)urlForApplication:(id)arg1 ;
-(NSURL *)feedbackLoggerDirectoryURL;
-(id)removeItemAtPath:(id)arg1 type:(unsigned long long)arg2 recursive:(BOOL)arg3 ;
-(id)makeUniqueDirectoryWithPath:(id)arg1 ;
-(BOOL)createDirectoryIfNeededAtPath:(id)arg1 error:(id*)arg2 ;
-(id)tmpFileForVideoTranscodeToPhotoDataDirectory:(BOOL)arg1 withExtension:(id)arg2 ;
-(BOOL)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2 ;
-(BOOL)directoryExistsAtPath:(id)arg1 ;
-(BOOL)cplCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)cplMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)cplIsFileExistsError:(id)arg1 ;
-(BOOL)cplIsFileDoesNotExistError:(id)arg1 ;
-(BOOL)cplFileExistsAtURL:(id)arg1 ;
-(BOOL)mf_makeCompletePath:(id)arg1 mode:(int)arg2 ;
-(BOOL)mf_canWriteToDirectoryAtPath:(id)arg1 ;
-(BOOL)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id*)arg3 ;
-(long long)mf_sizeForDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(id)mf_makeUniqueFileInDirectory:(id)arg1 ;
-(id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(long long)mf_sizeForDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2 ;
-(void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3 ;
-(BOOL)mf_setValue:(id)arg1 forExtendedAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id*)arg4 ;
-(id)mf_valueForExtendedAttribute:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_fides_removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)triCreateDirectoryForPath:(id)arg1 isDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)triForceRemoveItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)triPath:(id)arg1 relativeToParentPath:(id)arg2 ;
-(id)_triResolveSymLinks:(id)arg1 ;
-(BOOL)triRemoveDirectoryForPath:(id)arg1 isDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)uns_securelyMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)uns_contentsSortedByLastModificationDateOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)directorySize:(id)arg1 ;
-(void)removeDirectory:(id)arg1 ;
-(void)cleanDirectory:(id)arg1 withLRULimit:(unsigned long long)arg2 ;
-(void)cleanDirectory:(id)arg1 withDateOlderThan:(id)arg2 ;
-(BOOL)makeCompletePath:(id)arg1 mode:(int)arg2 ;
-(id)archivedDataAtPath:(id)arg1 createPKZipArchive:(BOOL)arg2 error:(id*)arg3 ;
-(id)archivedDataAtPath:(id)arg1 createPKZipArchive:(BOOL)arg2 ;
-(BOOL)archiveURLToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(BOOL)arg3 ;
-(BOOL)archiveURLToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(BOOL)arg3 ;
-(id)makeUniqueDirectoryWithPath:(id)arg1 ;
-(id)_webkit_createTemporaryDirectoryWithTemplatePrefix:(id)arg1 ;
-(id)_webkit_pathWithUniqueFilenameForPath:(id)arg1 ;
-(id)_safari_containerDirectory;
-(id)_safari_libraryDirectoryForHomeDirectory:(id)arg1 ;
-(id)safari_settingsDirectoryForLibraryDirectory:(id)arg1 ;
-(id)safari_safariLibraryDirectory;
-(BOOL)_safari_removeFileAtURL:(id)arg1 onlyIfFileExists:(BOOL)arg2 error:(id*)arg3 ;
-(id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned long long)arg2 ;
-(id)safari_settingsDirectoryForHomeDirectory:(id)arg1 ;
-(id)safari_settingsDirectoryURL;
-(id)safari_nonContaineredSettingsDirectoryURL;
-(id)safari_productionSafariSettingsDirectory;
-(id)safari_ensureDirectoryExists:(id)arg1 ;
-(id)safari_autoFillQuirksDownloadDirectoryURL;
-(id)safari_createTemporaryDirectoryWithTemplate:(id)arg1 ;
-(BOOL)safari_moveDownloadedFileAtURL:(id)arg1 toURL:(id)arg2 ;
-(BOOL)safari_removeFileAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)safari_removeFileOnlyAtURL:(id)arg1 error:(id*)arg2 ;
-(id)safari_pathWithUniqueFilenameForPath:(id)arg1 ;
-(id)safari_frameworksDirectoryURLs;
-(BOOL)safari_removeDirectoryIfEmpty:(id)arg1 ;
-(BOOL)br_movePromisedItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)br_setPutBackInfoOnItemAtURL:(id)arg1 ;
-(id)br_putBackURLForTrashedItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)br_trashItemAtURL:(id)arg1 resultingURL:(id*)arg2 error:(id*)arg3 ;
-(BOOL)br_putBackTrashedItemAtURL:(id)arg1 resultingURL:(id*)arg2 error:(id*)arg3 ;
-(void)br_setLastOpenDate:(id)arg1 onItemAtURL:(id)arg2 ;
-(void)br_setFavoriteRank:(id)arg1 onItemAtURL:(id)arg2 ;
-(id)br_topLevelSharedFolderForURL:(id)arg1 error:(id*)arg2 ;
-(id)brc_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(int)brc_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(id)brc_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(BOOL)_cn_getValue:(id*)arg1 forExtendendAttribute:(id)arg2 path:(id)arg3 error:(id*)arg4 ;
-(BOOL)_cn_setValue:(id)arg1 forExtendedAttribute:(id)arg2 path:(id)arg3 error:(id*)arg4 ;
-(id)_cn_valueForExtendedAttribute:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
-(BOOL)_cn_removeExtendedAttributeForKey:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
-(id)_doc_importItemAtURL:(id)arg1 toDestination:(long long)arg2 error:(id*)arg3 ;
-(BOOL)if_setBool:(BOOL)arg1 forExtendedAttributeNamed:(id)arg2 ofItemAtURL:(id)arg3 ;
-(BOOL)if_setAuditToken:(SCD_Struct_NS0)arg1 forExtendedAttributeNamed:(id)arg2 ofItemAtURL:(id)arg3 ;
-(BOOL)if_boolForExtendedAttributeName:(id)arg1 ofItemAtURL:(id)arg2 ;
-(SCD_Struct_NS0)if_auditTokenForExtendedAttributeNamed:(id)arg1 ofItemAtURL:(id)arg2 ;
-(BOOL)fp_trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3 ;
-(id)fp_trashURLForItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)fp_createPathIfNeeded:(id)arg1 ;
-(id)gs_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)_randomTemporaryPathWithFileName:(id)arg1 ;
-(id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2 ;
-(id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2 withAppendedPathComponent:(id)arg3 ;
-(BOOL)_isPathOnMissingVolume:(id)arg1 ;
-(id)_randomTemporaryPathWithFileName:(id)arg1 withAppendedPathComponent:(id)arg2 ;
-(id)_generateLinkForURL:(id)arg1 ;
-(BOOL)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 asCopy:(BOOL)arg5 ;
-(id)_randomTemporaryPathWithSuffix:(id)arg1 ;
-(id)_randomTemporaryPathWithSuffix:(id)arg1 withAppendedPathComponent:(id)arg2 ;
-(id)_randomSimilarFilePathAsPath:(id)arg1 ;
-(BOOL)makeDirectoriesInPath:(id)arg1 mode:(unsigned)arg2 ;
-(BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 ;
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 ;
-(BOOL)_cutIsPathOnMissingVolume:(id)arg1 ;
-(id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3 ;
-(id)cutRandomTemporaryPathWithFileName:(id)arg1 ;
-(BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4 ;
-(BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)getRelationship:(long long*)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id*)arg4 ;
-(id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)synchronouslyGetFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(id)stringWithFileSystemRepresentation:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)getFileProviderMessageInterfacesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(BOOL)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6 ;
-(id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2 ;
-(BOOL)getRelationship:(long long*)arg1 ofDirectory:(unsigned long long)arg2 inDomain:(unsigned long long)arg3 toItemAtURL:(id)arg4 error:(id*)arg5 ;
-(BOOL)fileExistsAtPath:(id)arg1 ;
-(BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2 ;
-(id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(BOOL)arg4 ;
-(id)URLsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2 ;
-(id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(BOOL)arg4 error:(id*)arg5 ;
-(void)getFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(BOOL*)arg2 traverseLink:(BOOL)arg3 ;
-(id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)fileExistsAtPath:(id)arg1 isDirectory:(BOOL*)arg2 ;
-(NSURL *)temporaryDirectory;
-(id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned long long)arg2 ;
-(id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id*)arg2 error:(id*)arg3 ;
-(BOOL)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1 ;
-(BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)setUbiquitous:(BOOL)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id*)arg4 ;
-(BOOL)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 withPath:(id)arg3 ;
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(void)_registerForUbiquityAccountChangeNotifications;
-(BOOL)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id*)arg4 ;
-(BOOL)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2 ;
-(id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(BOOL)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2 ;
-(BOOL)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_processHasUbiquityContainerEntitlement;
-(void)_postUbiquityAccountChangeNotification:(id)arg1 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_URLForTrashingItemAtURL:(id)arg1 create:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(id)attributesOfFileSystemForPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(id)URLForUbiquityContainerIdentifier:(id)arg1 ;
-(void)_web_noteFileChangedAtPath_nowarn:(id)arg1 ;
-(BOOL)_processCanAccessUbiquityIdentityToken;
-(BOOL)trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3 ;
-(id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_URLForReplacingItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id)pathContentOfSymbolicLinkAtPath:(id)arg1 ;
-(id)subpathsOfDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
-(void)_web_backgroundRemoveFileAtPath:(id)arg1 ;
-(BOOL)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2 ;
-(BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(void)_web_backgroundRemoveLeftoverFiles:(id)arg1 ;
-(id)_web_visibleItemsInDirectoryAtPath:(id)arg1 ;
-(id)_web_pathWithUniqueFilenameForPath:(id)arg1 ;
-(const char*)fileSystemRepresentationWithPath:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(void)dealloc;
-(id)extendedAttributesAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)evictUbiquitousItemAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_safeDelegate;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)subpathsAtPath:(id)arg1 ;
-(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)contentsAtPath:(id)arg1 ;
-(BOOL)_web_removeFileOnlyAtPath:(id)arg1 ;
-(id)_web_carbonPathForPath_nowarn:(id)arg1 ;
-(id)componentsToDisplayForPath:(id)arg1 ;
-(BOOL)changeCurrentDirectoryPath:(id)arg1 ;
-(id)fileSystemAttributesAtPath:(id)arg1 ;
-(BOOL)changeFileAttributes:(id)arg1 atPath:(id)arg2 ;
-(BOOL)_processUsesCloudServices;
-(BOOL)contentsEqualAtPath:(id)arg1 andPath:(id)arg2 ;
-(BOOL)removeFileAtPath:(id)arg1 handler:(id)arg2 ;
-(void)_performRemoveFileAtPath:(id)arg1 ;
-(BOOL)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)directoryCanBeCreatedAtPath:(id)arg1 ;
-(id)enumeratorAtPath:(id)arg1 ;
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)_web_startupVolumeName_nowarn;
-(NSString *)currentDirectoryPath;
-(id)_displayPathForPath:(id)arg1 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(BOOL)isDeletableFileAtPath:(id)arg1 ;
-(BOOL)isUbiquitousItemAtURL:(id)arg1 ;
-(BOOL)isWritableFileAtPath:(id)arg1 ;
-(BOOL)isReadableFileAtPath:(id)arg1 ;
-(id)displayNameAtPath:(id)arg1 ;
-(id<NSObject><NSCopying><NSCoding>)ubiquityIdentityToken;
-(void)setDelegate:(id<NSFileManagerDelegate>)arg1 ;
-(BOOL)isExecutableFileAtPath:(id)arg1 ;
-(id<NSFileManagerDelegate>)delegate;
@end

