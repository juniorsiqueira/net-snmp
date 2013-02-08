/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.17 $ of : mfd-data-access.m2c,v $
 *
 * $Id$
 */
#ifndef SNMPNOTIFYFILTERTABLE_DATA_ACCESS_H
#define SNMPNOTIFYFILTERTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     *********************************************************************
     * function declarations
     */

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table snmpNotifyFilterTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * SNMP-NOTIFICATION-MIB::snmpNotifyFilterTable is subid 3 of snmpNotifyObjects.
     * Its status is Current.
     * OID: .1.3.6.1.6.3.13.1.3, length: 9
     */


    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_init_data(snmpNotifyFilterTable_registration
                                        * snmpNotifyFilterTable_reg);


    void            snmpNotifyFilterTable_container_init(netsnmp_container
                                                         **container_ptr_ptr);
    void
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_container_shutdown(netsnmp_container
                                                 *container_ptr);

    int             snmpNotifyFilterTable_container_load(netsnmp_container
                                                         *container);
    void            snmpNotifyFilterTable_container_free(netsnmp_container
                                                         *container);

    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_row_prep(snmpNotifyFilterTable_rowreq_ctx *
                                       rowreq_ctx);

    int
     
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        snmpNotifyFilterTable_validate_index
        (snmpNotifyFilterTable_registration * snmpNotifyFilterTable_reg,
         snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx);
    int             snmpNotifyFilterTable_snmpNotifyFilterProfileName_check_index(snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx);       /* external */
    int             snmpNotifyFilterSubtree_check_index(snmpNotifyFilterTable_rowreq_ctx * rowreq_ctx); /* internal */

    struct vacm_viewEntry *snmpNotifyFilterTable_vacm_view_subtree(const
                                                                   char
                                                                   *profile);


#ifdef __cplusplus
}
#endif
#endif                          /* SNMPNOTIFYFILTERTABLE_DATA_ACCESS_H */
